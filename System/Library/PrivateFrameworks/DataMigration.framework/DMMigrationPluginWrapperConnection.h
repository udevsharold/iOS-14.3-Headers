/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {

	DMXPCConnection* _connection;
	BOOL _didReceivePid;

}

@property (nonatomic,readonly) BOOL didReceivePid; 
+(id)connection;
-(id)init;
-(int)pid;
-(void)handleMessage:(id)arg1 ;
-(BOOL)didReceivePid;
-(void)runPluginAtPath:(id)arg1 withParameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)resume;
@end
