/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSXPCConnection, NSData;

@interface Caller : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,__weak,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,readonly) int asid; 
@property (nonatomic,readonly) SCD_Struct_Ca0 auditToken; 
@property (nonatomic,readonly) NSData * auditTokenData; 
+(id)current;
-(int)asid;
-(unsigned)euid;
-(NSData *)auditTokenData;
-(int)pid;
-(unsigned long long)hash;
-(id)initWithConnection:(id)arg1 ;
-(id)description;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToAuditToken:(SCD_Struct_Ca0)arg1 ;
-(SCD_Struct_Ca0)auditToken;
-(BOOL)isEqualToAuditTokenData:(id)arg1 ;
-(NSXPCConnection *)connection;
@end
