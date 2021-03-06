/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface FontProviderManager : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedManager;
+(void)registerFonts:(id)arg1 enabled:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)unregisterFonts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)registeredFontsInfo:(BOOL)arg1 ;
-(id)init;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)_registerFonts:(id)arg1 enabled:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)normalizeURLs:(id)arg1 ;
-(void)_unregisterFonts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)registeredFontsInfo:(BOOL)arg1 ;
@end

