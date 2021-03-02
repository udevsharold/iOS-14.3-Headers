/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage, UIView;


@protocol PLSummaryPlatter <PLPlatter>
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * primarySubtitleText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (nonatomic,retain) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long messageNumberOfLines; 
@required
-(void)setAccessoryView:(id)arg1;
-(UIView *)accessoryView;
-(UIImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(void)setMessageNumberOfLines:(unsigned long long)arg1;
-(NSString *)primaryText;
-(void)setPrimaryText:(id)arg1;
-(void)setSummaryText:(id)arg1;
-(NSString *)summaryText;
-(NSString *)secondaryText;
-(unsigned long long)messageNumberOfLines;
-(void)setSecondaryText:(id)arg1;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(id)arg1;

@end
