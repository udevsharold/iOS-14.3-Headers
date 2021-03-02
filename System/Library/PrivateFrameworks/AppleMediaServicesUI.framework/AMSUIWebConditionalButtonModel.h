/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebModelInterface.h>

@class AMSUIWebButtonModel, NSString;

@interface AMSUIWebConditionalButtonModel : NSObject <AMSUIWebModelInterface> {

	BOOL _hideOnModal;
	BOOL _hideOnPush;
	AMSUIWebButtonModel* _button;

}

@property (nonatomic,retain) AMSUIWebButtonModel * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hideOnModal;                          //@synthesize hideOnModal=_hideOnModal - In the implementation block
@property (assign,nonatomic) BOOL hideOnPush;                           //@synthesize hideOnPush=_hideOnPush - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebButtonModel *)button;
-(void)setButton:(AMSUIWebButtonModel *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)hideOnPush;
-(BOOL)hideOnModal;
-(BOOL)matchesForContainer:(id)arg1 ;
-(void)setHideOnModal:(BOOL)arg1 ;
-(void)setHideOnPush:(BOOL)arg1 ;
@end
