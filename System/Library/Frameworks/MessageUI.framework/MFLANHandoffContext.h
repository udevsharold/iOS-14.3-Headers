/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MFLANHandoffContext : NSObject {

	unsigned short _port;
	NSString* _host;

}

@property (nonatomic,copy) NSString * host;                    //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;              //@synthesize port=_port - In the implementation block
-(unsigned short)port;
-(NSString *)host;
-(void)setPort:(unsigned short)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)dealloc;
@end
