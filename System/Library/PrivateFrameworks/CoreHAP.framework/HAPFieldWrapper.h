/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPFieldWrapper : HMFObject {

	long long _tlvid;
	NSString* _name;

}

@property (assign,nonatomic) long long tlvid;              //@synthesize tlvid=_tlvid - In the implementation block
@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(long long)tlvid;
-(NSString *)name;
-(id)initWithTlvId:(unsigned long long)arg1 name:(id)arg2 ;
-(void)setTlvid:(long long)arg1 ;
@end

