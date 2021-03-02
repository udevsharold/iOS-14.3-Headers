/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AMSRatingsProviderResult : NSObject {

	NSArray* _ratingsStoreFronts;

}

@property (nonatomic,readonly) NSArray * ratingsStoreFronts;              //@synthesize ratingsStoreFronts=_ratingsStoreFronts - In the implementation block
-(id)initWithDictionaries:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)_mapRatingsDictionaries:(id)arg1 withMediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)initWithURLResult:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)initWithData:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)arg1 ;
-(NSArray *)ratingsStoreFronts;
@end
