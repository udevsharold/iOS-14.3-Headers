/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDMediaPropertyRequest, NSError, NSNumber, NSDate;

@interface HMDMediaPropertyResponse : HMFObject {

	HMDMediaPropertyRequest* _request;
	id _value;
	NSError* _error;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;

}

@property (nonatomic,readonly) HMDMediaPropertyRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                         //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpdatedTime;                      //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
+(id)responsesFromSerializedResponse:(id)arg1 requests:(id)arg2 home:(id)arg3 ;
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2 ;
+(id)serializeResponses:(id)arg1 ;
+(id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4 ;
+(id)groupedProfileResponses:(id)arg1 ;
-(id)value;
-(NSError *)error;
-(HMDMediaPropertyRequest *)request;
-(void)setValue:(id)arg1 ;
-(id)description;
-(NSDate *)valueUpdatedTime;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(NSNumber *)stateNumber;
-(id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4 ;
@end
