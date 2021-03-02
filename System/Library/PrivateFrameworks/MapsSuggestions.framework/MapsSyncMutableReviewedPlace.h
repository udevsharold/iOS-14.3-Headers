/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol MapsSyncMutableReviewedPlace <MapsSyncMutableBaseItem>
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,retain) NSDate * lastSuggestedReviewDate; 
@property (assign,nonatomic) BOOL hasUserReviewed; 
@required
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1;
-(NSDate *)lastSuggestedReviewDate;
-(void)setLastSuggestedReviewDate:(id)arg1;
-(BOOL)hasUserReviewed;
-(void)setHasUserReviewed:(BOOL)arg1;

@end
