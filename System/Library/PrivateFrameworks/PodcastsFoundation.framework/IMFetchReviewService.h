/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSString;

@interface IMFetchReviewService : IMBaseStoreService {

	NSString* _adamID;

}

@property (nonatomic,retain) NSString * adamID;              //@synthesize adamID=_adamID - In the implementation block
-(id)urlRequest;
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(id)initWithAdamID:(id)arg1 ;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
@end

