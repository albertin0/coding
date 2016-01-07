DrupalAjaxForm=function(e){var i=function(e,r,t){var n=Drupal.settings.username;if(t&&n||!t){return $.ajax({dataType:e["dataType"]?e["dataType"]:"JSON",url:e["url"],type:e["type"]?e["type"]:"GET",data:e["data"],retryCount:e["retryCount"]?e["retryCount"]:0,retryLimit:5,success:function(i){if(typeof e["success"]=="function"){e["success"](i)}},error:function(n){if(n.status>=499&&this.retryCount<this.retryLimit){e["retryCount"]=e["retryCount"]?e["retryCount"]+1:1;setTimeout(function(){i(e,r,t)},2e3)}else{if(typeof e["error"]=="function"){e["error"](n)}}}})}};var r=this;this.formContainer=e.formContainerId;this.formURL=e.formURL;this.loginRequired=e.loginRequired;this.isFieldDescriptionInline=e.isFieldDescriptionInline===undefined?false:e.isFieldDescriptionInline;this.isErrorInline=e.isErrorInline===undefined?false:e.isErrorInline;this.formFunction=e.formFunction;this.formsuccess=e.formsuccess;this.errorpopup=e.errorpopup;this.error={};this.isError=function(){var e=false;$.each(r.error,function(i,r){e=e||r});return e};this.getFormElement=function(){return $($("#"+r.formContainer).find('[cc-forms="form"]')[0])};this.getFormErrorsElement=function(e){if(!r.isErrorInline){var i=$($("#"+r.formContainer).find('[cc-forms="form-errors"]')[0])}else{var i=$($("#"+r.formContainer).find("#edit-"+e).parent().find('[cc-forms="form-field-description"]')[0])}return i};this.getFormDescriptionElement=function(){return $($("#"+r.formContainer).find('[cc-forms="form-description"]')[0])};this.getFormOverlay=function(){return $($("#"+r.formContainer).find('[cc-forms="form-overlay"]')[0])};this.getFormFieldDescriptionElement=function(e){if(!r.isFieldDescriptionInline){var i=$($("#"+r.formContainer).find('[cc-forms="form-field-description"]')[0])}else{var i=$($("#"+r.formContainer).find("#edit-"+e).parent().find('[cc-forms="form-field-description"]')[0])}return i};this.cAjax=i;this.loadForm=function(){this.cAjax({url:r.formURL,error:r.errorP,success:r.successP},true,false,false)};this.bindSubmitFormEvent=function(){r.getFormElement().find("#edit-submit-button").removeClass("form-submit");r.getFormElement().find("#edit-submit-button").click(function(e){if(e!=undefined){e.preventDefault()}if(r.isError()){invokeGenericModal({message:'<div class="ccl-font-h2 ccl-border-bottom ccl-padding-s ccl-margin-sm ccl-align-c">Error'+'</div><div class="ccl-font-p ccl-align-c">Ah, looks like you missed something there. Let’s do it again.</div>',closeCross:true,id:r.formId+"-error-action"});return}r.getFormOverlay().fadeIn();r.getFormErrorsElement().fadeOut();r.cAjax({url:r.formURL,type:"POST",data:$("#"+r.formId).serialize(),error:r.errorP,success:r.successP},true,r.loginRequired)})};this.disableCopyPaste=function(){r.getFormElement().find("input.disablecopypaste").bind("copy paste",function(e){e.preventDefault()})};this.disableAutocomplete=function(){r.getFormElement().find("input").attr("autocomplete","off")};this.showDescription=function(e){var i="";var t="";if(!r.isFieldDescriptionInline){i=r.getFormFieldDescriptionElement();i.find("div").fadeOut();i.html('<div style="display: none;"></div>');t=$("#"+e+"-description").html();if(t!=""){i.find("div").html(t);i.find("div").fadeIn()}}else{r.getFormElement().find('[cc-forms="form-field-description"]').fadeOut().removeClass("error");i=r.getFormFieldDescriptionElement(e);t=$("#"+e+"-description").html();if(t!=""){i.find('[cc-forms="description"]').html(t);i.fadeIn()}}};this.showErrors=function(e){if(typeof e==="string"){r.getFormElement().html(e)}else{if(!r.isErrorInline){r.getFormErrorsElement().find("div").find("ul").html("");var i=r.getFormErrorsElement().find("div").find("ul");$.each(e,function(e,t){e=e.replace(/_/g,"-");r.getFormElement().find("#edit-"+e+"-wrapper").append('<div class="ccl-su-val-message"><img class="ccl-su-val-img" src="/sites/all/modules/codechef_open_register/images/cross-2.svg"></div>');i.append("<li>"+t+"</li>")});r.getFormErrorsElement().fadeIn()}else{r.getFormElement().find('[cc-forms="form-field-description"]').fadeOut().removeClass("error");$.each(e,function(e,i){e=e.replace(/_/g,"-");var t=r.getFormFieldDescriptionElement(e);t.find('[cc-forms="description"]').html(i);t.addClass("error");t.fadeIn()})}}};this.attachDescriptionElement=function(){r.getFormElement().find("#"+r.formId).find('[description="1"][type="text"]').parent().append('<div style="display:none;" cc-forms="form-field-description" class="ccl-su-help-position">'+'<div class="ccl-su-help">'+'<div class="ccl-font-s ccl-align-l">'+'<div cc-forms="description"></div></div></div></div>');r.getFormElement().find("#"+r.formId).find('[description="1"][type="checkbox"]').parent().append('<div style="display:none;" cc-forms="form-field-description" class="ccl-su-help-position">'+'<div class="ccl-su-help">'+'<div class="ccl-font-s ccl-align-l">'+'<div cc-forms="description"></div></div></div></div>');r.getFormElement().find("#"+r.formId).find('select[description="1"]').parent().append('<div style="display:none;" cc-forms="form-field-description" class="ccl-su-help-position">'+'<div class="ccl-su-help">'+'<div class="ccl-font-s ccl-align-l">'+'<div cc-forms="description"></div></div></div></div>');r.getFormElement().find("#"+r.formId).find('div[description="1"][type="radios"]').parent().append('<div style="display:none;" cc-forms="form-field-description" class="ccl-su-help-position">'+'<div class="ccl-su-help">'+'<div class="ccl-font-s ccl-align-l">'+'<div cc-forms="description"></div></div></div></div>');r.getFormElement().find("#"+r.formId).find('[description="1"]').focus(function(){r.showDescription($(this).attr("name").replace(/_/g,"-"));$(this).removeClass("error")})};this.bindValidators=function(){r.getFormElement().find("#"+r.formId).find('[validate="1"]').focusout(function(e){var i=$(this);if(i.val()){var t=$(this).attr("name");var n=$(this).attr("type");var o=$(r.getFormElement().find("#"+r.formId)[0]);var s=function(e){if(n=="radio"){i.parent().parent().parent().find('[type="radio"]').removeClass("error").removeClass("correct")}else{i.removeClass("success").removeClass("error")}if(e.status==="success"){r.error[t]=false;i.removeClass("error").addClass("correct")}else{r.error[t]=true;i.removeClass("success").addClass("error");r.showErrors(e.errors)}};r.cAjax({url:r.formURL+"?validate="+t,data:o.serialize(),type:"POST",success:s,error:r.errorP})}})};this.alignRadioButtons=function(){var e=r.getFormElement().find(".form-radios");$.each(e,function(e,i){var r=$(i);var t=r.find("div").find("label").find("input").attr("name").replace(/_/g,"-");var n=r.find("div").find("label").find("input").attr("description");r.parent().append("<div description='"+n+"' type='radios' identifier='"+t+"' id='edit-"+t+"'></div>");r.addClass("ccl-f-radio-pad-l");r.find("div").css("display","inline");r.find("div").find("label").addClass("ccl-f-radio-pad-l")})};this.successP=function(e){r.formId=e.formId;if(!e.form&&e.status=="success"){if(typeof r.formsuccess=="function"){r.formsuccess(e)}else{r.getFormElement().html('<div class="ccl-font-p ccl-align-c">'+e.success+"</div>")}}if(e.form){r.getFormElement().html(e.form);r.changeCaptchaHTML();if(typeof r.formFunction=="function"){r.formFunction()}r.disableCopyPaste();r.alignRadioButtons();r.attachDescriptionElement();r.bindValidators();r.bindSubmitFormEvent();r.disableAutocomplete()}if(e.status=="error"){r.showErrors(e.errors)}if(e.redirect){setTimeout(function(){window.location=e.redirect},e.timeout?e.timeout:3e3)}r.getFormOverlay().fadeOut()};this.errorP=function(e){if(r.errorpopup){invokeGenericModal({message:'<div class="ccl-font-h2 ccl-border-bottom ccl-padding-s ccl-margin-sm ccl-align-c">Error'+'</div><div class="ccl-font-p ccl-align-c ccl-margin-m">Please try submitting/reloading form, if this problem persists please report this at <a href="mailto:help@codechef.com">help@codechef.com.</a></div>'+'<button type="submit" id="'+r.formId+"-reload-button"+'" class="ccl-margin-auto ccl-padding-m ccl-f-input">Reload</button>',closeCross:true,id:r.formId+"-error-popup",callback:function(){$("#"+r.formId+"-reload-button").click(function(){r.loadForm();$("#"+r.formId+"-error-popup").popup("hide")})}})}else{r.getFormElement().html('<div class="ccl-font-p ccl-align-c ccl-margin-m">Please try submitting/reloading form, if this problem persists please report this at <a href="mailto:help@codechef.com">help@codechef.com.</a></div>'+'<button type="submit" id="'+r.formId+"-reload-button"+'" class="ccl-margin-auto ccl-padding-m ccl-f-input">Reload</button>');$("#"+r.formId+"-reload-button").click(function(){r.loadForm()})}r.getFormOverlay().fadeOut()};this.changeCaptchaHTML=function(){var e=$(r.getFormElement().find(".captcha")[0]);e.addClass("ccl-margin-m ccl-clearfix ccl-su-position-rel");e.find("img").wrap('<div style="display: inline;" class="ccl-su-captcha-span ccl-align-l "></div>');e.find("#edit-captcha-response").addClass("ccl-f-placeholder ccl-f-input");if(e.find("#edit-captcha-response").parent().is("div")){e.find("#edit-captcha-response").unwrap();e.find("#edit-captcha-response").wrap('<div style="display: inline;" id="edit-captcha-response-wrapper" class="ccl-su-captcha-span"></div>');e.find("#edit-captcha-response-wrapper").before('<button id="captcha-reload" class="small-refresh-button fa fa-refresh"></button>');e.find("#captcha-reload").click(function(e){e.preventDefault();r.reloadCaptcha();return false});e.find("#edit-captcha-response").attr("description","1");e.find("#edit-captcha-response").attr("placeholder","Enter")}r.getFormElement().find(".captcha").find(".description").attr("id","captcha-response-description");r.getFormElement().find(".captcha").find("label").remove()};this.reloadCaptcha=function(){var e=r.getFormElement();var i=new Date;var t="/captcha/refresh/"+r.formId+"?"+i.getTime();e.find(".captcha").find("img").css("width","26px");e.find(".captcha").find("img").attr("src","/em/components/cceditor/images/loader.gif");r.cAjax({url:t,data:{},success:function(i){if(i.status==1){$(this).on();e.find(".captcha").find("img").attr("src",i.data.url).load(function(){$(this).css("width","80px");$(this).off()});e.find("input[name=captcha_sid]").val(i.data.sid);e.find("input[name=captcha_token]").val(i.data.token)}else{alert(i.message)}},dataType:"json"});return false};this.showForm=function(){r.getFormOverlay().fadeIn();r.loadForm()};this.showForm()};