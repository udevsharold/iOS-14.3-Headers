/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PKPushPayload : NSObject {

	NSString* _type;
	NSDictionary* _dictionaryPayload;

}

@property (copy) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (copy) NSDictionary * dictionaryPayload;              //@synthesize dictionaryPayload=_dictionaryPayload - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionaryPayload;
-(void)setDictionaryPayload:(NSDictionary *)arg1 ;
@end
