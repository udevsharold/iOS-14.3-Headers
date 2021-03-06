/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CheckerBoardServices/CheckerBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CBSProxyServer : NSObject <NSSecureCoding> {

	NSString* _server;
	NSNumber* _port;
	NSString* _token;

}

@property (nonatomic,retain) NSString * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSNumber * port;                //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * token;               //@synthesize token=_token - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setToken:(NSString *)arg1 ;
-(NSNumber *)port;
-(void)setPort:(NSNumber *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)server;
-(void)setServer:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)token;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServer:(id)arg1 port:(id)arg2 token:(id)arg3 ;
@end

