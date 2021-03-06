/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HRFeatureRegulatoryPanelDisplayable.h>

@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;
@class NSString, NSAttributedString;

@interface HRFeatureRegulatoryReenableFeatureItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {

	NSString* _productName;
	id<HRFeatureRegulatoryReenableFeatureActionDelegate> _delegate;

}

@property (assign,nonatomic) NSString * productName;                                                               //@synthesize productName=_productName - In the implementation block
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryReenableFeatureActionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * titleString; 
@property (nonatomic,copy,readonly) NSAttributedString * valueString; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) long long cellAccessoryType; 
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInteractive;
-(NSString *)productName;
-(NSAttributedString *)valueString;
-(NSAttributedString *)titleString;
-(void)setDelegate:(id<HRFeatureRegulatoryReenableFeatureActionDelegate>)arg1 ;
-(void)setProductName:(NSString *)arg1 ;
-(id<HRFeatureRegulatoryReenableFeatureActionDelegate>)delegate;
-(long long)cellAccessoryType;
-(void)handleUserInteractionWithItemWithHostViewController:(id)arg1 ;
-(id)initWithProductName:(id)arg1 delegate:(id)arg2 ;
@end

