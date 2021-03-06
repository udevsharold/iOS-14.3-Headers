/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPGridTemplateProviding.h>

@class NSArray, CPGridTemplate, NSString;

@interface CPSGridTemplateViewController : CPSBaseTemplateViewController <CPSButtonDelegate, CPGridTemplateProviding> {

	NSArray* _gridButtons;

}

@property (nonatomic,retain) NSArray * gridButtons;                        //@synthesize gridButtons=_gridButtons - In the implementation block
@property (nonatomic,readonly) CPGridTemplate * gridTemplate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectButton:(id)arg1 ;
-(void)setControl:(id)arg1 enabled:(BOOL)arg2 ;
-(NSArray *)gridButtons;
-(void)_viewDidLoad;
-(id)initWithGridTemplate:(id)arg1 interfaceDelegate:(id)arg2 templateEnvironment:(id)arg3 ;
-(BOOL)_wantsNowPlayingButton;
-(CPGridTemplate *)gridTemplate;
-(void)setGridButtons:(NSArray *)arg1 ;
-(id)_buttonForIdentifier:(id)arg1 ;
@end

