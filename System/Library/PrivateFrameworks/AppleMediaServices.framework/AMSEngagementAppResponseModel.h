/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSString;

@interface AMSEngagementAppResponseModel : NSObject {

	NSDate* _created;
	NSDictionary* _definition;

}

@property (nonatomic,readonly) NSDictionary * definition;                //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) NSDate * created;                         //@synthesize created=_created - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseData; 
+(BOOL)_shouldEvictDefinition:(id)arg1 created:(id)arg2 ;
-(NSDictionary *)responseData;
-(NSString *)cacheKey;
-(id)exportObject;
-(id)initWithCacheObject:(id)arg1 ;
-(id)initWithData:(id)arg1 cacheInfo:(id)arg2 ;
-(BOOL)matchesEvent:(id)arg1 ;
-(NSDate *)created;
-(NSDictionary *)definition;
@end

