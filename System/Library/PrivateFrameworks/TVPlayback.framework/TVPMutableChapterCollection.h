/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPChapterCollection.h>

@class NSString, NSArray, NSDate, NSURL;

@interface TVPMutableChapterCollection : TVPChapterCollection

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * chapters; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,retain) id backingData; 
@property (nonatomic,retain) NSDate * startDate; 
@property (assign,nonatomic) BOOL shouldStartPlaybackFromStartDate; 
@property (assign,nonatomic) BOOL shouldDisplayChapterMarkers; 
@property (assign,nonatomic) BOOL shouldShowDescriptionOnChapterSkip; 
@property (assign,nonatomic) double refreshInterval; 
@property (nonatomic,copy) NSURL * refreshURL; 
@end

