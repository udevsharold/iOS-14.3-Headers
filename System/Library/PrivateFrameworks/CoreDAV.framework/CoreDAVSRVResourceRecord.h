/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject {

	NSString* _serviceString;
	NSNumber* _priority;
	NSNumber* _weight;
	NSNumber* _port;
	NSString* _target;

}

@property (nonatomic,retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (nonatomic,retain) NSNumber * priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSNumber * port;                       //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * target;                     //@synthesize target=_target - In the implementation block
-(NSNumber *)port;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSString *)target;
-(id)description;
-(void)setWeight:(NSNumber *)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(NSNumber *)weight;
-(NSNumber *)priority;
-(NSString *)serviceString;
-(void)setServiceString:(NSString *)arg1 ;
@end

