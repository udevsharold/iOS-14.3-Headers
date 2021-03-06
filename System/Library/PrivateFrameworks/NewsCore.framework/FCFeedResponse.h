/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSError, FCFeedRange;

@interface FCFeedResponse : NSObject {

	BOOL _exhaustedRequestRange;
	NSString* _feedID;
	NSArray* _feedItems;
	NSError* _error;

}

@property (nonatomic,copy) NSString * feedID;                             //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSArray * feedItems;                           //@synthesize feedItems=_feedItems - In the implementation block
@property (assign,nonatomic) BOOL exhaustedRequestRange;                  //@synthesize exhaustedRequestRange=_exhaustedRequestRange - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) FCFeedRange * feedRange; 
-(void)setFeedID:(NSString *)arg1 ;
-(NSString *)feedID;
-(void)setFeedItems:(NSArray *)arg1 ;
-(NSError *)error;
-(FCFeedRange *)feedRange;
-(NSArray *)feedItems;
-(BOOL)exhaustedRequestRange;
-(void)setError:(NSError *)arg1 ;
-(void)setExhaustedRequestRange:(BOOL)arg1 ;
-(id)feedResponseByMergingWithResponse:(id)arg1 ;
@end

