/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIPreferencesController.h>

@class NSXPCConnection, NSString;

@interface TIPreferencesControllerClient : TIPreferencesController {

	NSXPCConnection* _connection;
	BOOL _writeable;
	BOOL _isValid;
	NSString* _machName;

}

@property (nonatomic,retain) NSString * machName;              //@synthesize machName=_machName - In the implementation block
@property (assign,nonatomic) BOOL isValid;                     //@synthesize isValid=_isValid - In the implementation block
+(id)sharedPreferencesController;
+(id)serviceInterface;
-(NSString *)machName;
-(void)createConnectionIfNecessary;
-(void)setMachName:(NSString *)arg1 ;
-(id)init;
-(void)updateInputModes:(id)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(void)performWithWriteability:(BOOL)arg1 operations:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3 ;
-(BOOL)isValid;
-(void)forwardInvocation:(id)arg1 ;
-(void)_disconnect;
@end

