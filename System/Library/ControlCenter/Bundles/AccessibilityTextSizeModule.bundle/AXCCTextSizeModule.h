/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXCCTextSizeModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, AXCCTextSizeModuleViewController, NSString;

@interface AXCCTextSizeModule : NSObject <AXCCTextSizeModuleViewControllerDelegate, CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	AXCCTextSizeModuleViewController* _contentViewController;

}

@property (nonatomic,retain) AXCCTextSizeModuleViewController * contentViewController;                                             //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CCUIContentModuleContext *)contentModuleContext;
-(id)backgroundViewControllerForContext:(id)arg1 ;
-(void)setContentViewController:(AXCCTextSizeModuleViewController *)arg1 ;
-(id)init;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(AXCCTextSizeModuleViewController *)contentViewController;
-(void)expandModule;
@end
