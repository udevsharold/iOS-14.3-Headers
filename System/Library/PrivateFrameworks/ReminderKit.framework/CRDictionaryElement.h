/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRDataType;
@class CRVectorTimestamp;

@interface CRDictionaryElement : NSObject {

	id<CRDataType> _value;
	CRVectorTimestamp* _timestamp;

}

@property (nonatomic,retain) id<CRDataType> value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) CRVectorTimestamp * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)temporaryElementWithValue:(id)arg1 ;
-(id<CRDataType>)value;
-(CRVectorTimestamp *)timestamp;
-(void)mergeWith:(id)arg1 ;
-(void)setTimestamp:(CRVectorTimestamp *)arg1 ;
-(void)setValue:(id<CRDataType>)arg1 ;
-(unsigned long long)hash;
-(id)initWithValue:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValue:(id)arg1 timestamp:(id)arg2 ;
@end
