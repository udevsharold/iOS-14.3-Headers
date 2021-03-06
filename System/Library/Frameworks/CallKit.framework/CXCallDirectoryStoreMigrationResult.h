/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CXCallDirectoryStoreMigrationResult : NSObject {

	BOOL _requiresExtensionDisablement;
	BOOL _requiresExtensionSynchronization;
	long long _startingSchemaVersion;
	long long _endingSchemaVersion;

}

@property (assign,nonatomic) long long startingSchemaVersion;                    //@synthesize startingSchemaVersion=_startingSchemaVersion - In the implementation block
@property (assign,nonatomic) long long endingSchemaVersion;                      //@synthesize endingSchemaVersion=_endingSchemaVersion - In the implementation block
@property (assign,nonatomic) BOOL requiresExtensionDisablement;                  //@synthesize requiresExtensionDisablement=_requiresExtensionDisablement - In the implementation block
@property (assign,nonatomic) BOOL requiresExtensionSynchronization;              //@synthesize requiresExtensionSynchronization=_requiresExtensionSynchronization - In the implementation block
-(void)setStartingSchemaVersion:(long long)arg1 ;
-(BOOL)requiresExtensionDisablement;
-(void)setRequiresExtensionSynchronization:(BOOL)arg1 ;
-(void)setEndingSchemaVersion:(long long)arg1 ;
-(long long)startingSchemaVersion;
-(long long)endingSchemaVersion;
-(BOOL)requiresExtensionSynchronization;
-(void)setRequiresExtensionDisablement:(BOOL)arg1 ;
@end

