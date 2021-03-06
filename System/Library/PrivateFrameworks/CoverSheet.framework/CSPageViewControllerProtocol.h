/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CSLayoutStrategy, NSString;


@protocol CSPageViewControllerProtocol <CSCoverSheetViewPresenting>
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerProtocol> coverSheetViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy; 
@property (nonatomic,copy,readonly) NSString * pageRole; 
@optional
-(double)dateTimeInsetX;
-(double)customListWidth;
-(double)minimumDateToListSpacing;
-(double)listInsetX;
-(unsigned long long)listWidthStrategy;
-(NSString *)pageRole;
-(unsigned long long)dateTimeLayout;
-(unsigned long long)listLayout;

@required
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(id)arg1;
-(BOOL)authenticated;
-(void)setCoverSheetViewController:(id)arg1;
-(id<CSCoverSheetViewControllerProtocol>)coverSheetViewController;
-(void)setTransitioning:(BOOL)arg1;
-(BOOL)isTransitioning;

@end

