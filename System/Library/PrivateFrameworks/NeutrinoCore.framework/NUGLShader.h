/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSString;

@interface NUGLShader : NUGLObject {

	long long _compilationStatus;
	NSError* _compilationError;
	long long _type;
	NSString* _source;

}

@property (readonly) unsigned glType; 
@property (readonly) unsigned glStage; 
@property (readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (readonly) NSString * source;              //@synthesize source=_source - In the implementation block
-(void)delete;
-(id)init;
-(unsigned)glType;
-(long long)type;
-(unsigned)glStage;
-(NSString *)source;
-(void)generate:(id)arg1 ;
-(id)initWithType:(long long)arg1 source:(id)arg2 ;
-(BOOL)compile:(id)arg1 error:(out id*)arg2 ;
-(void)_compile:(id)arg1 ;
@end

