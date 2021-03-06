/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSFeederPrefetchOptions : NSObject <NSCopying> {

	unsigned long long _personCountPrefetchMode;
	unsigned long long _personsPrefetchMode;
	unsigned long long _scenesPrefetchMode;
	unsigned long long _faceInformationPrefetchMode;
	unsigned long long _locationPrefetchMode;

}

@property (assign,nonatomic) unsigned long long personCountPrefetchMode;                  //@synthesize personCountPrefetchMode=_personCountPrefetchMode - In the implementation block
@property (assign,nonatomic) unsigned long long personsPrefetchMode;                      //@synthesize personsPrefetchMode=_personsPrefetchMode - In the implementation block
@property (assign,nonatomic) unsigned long long scenesPrefetchMode;                       //@synthesize scenesPrefetchMode=_scenesPrefetchMode - In the implementation block
@property (assign,nonatomic) unsigned long long faceInformationPrefetchMode;              //@synthesize faceInformationPrefetchMode=_faceInformationPrefetchMode - In the implementation block
@property (assign,nonatomic) unsigned long long locationPrefetchMode;                     //@synthesize locationPrefetchMode=_locationPrefetchMode - In the implementation block
+(id)feederPrefetchOptionsWithDefaultMode:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)locationPrefetchMode;
-(unsigned long long)scenesPrefetchMode;
-(unsigned long long)personCountPrefetchMode;
-(void)setPersonsPrefetchMode:(unsigned long long)arg1 ;
-(void)setLocationPrefetchMode:(unsigned long long)arg1 ;
-(void)setPersonCountPrefetchMode:(unsigned long long)arg1 ;
-(unsigned long long)personsPrefetchMode;
-(void)setFaceInformationPrefetchMode:(unsigned long long)arg1 ;
-(void)setScenesPrefetchMode:(unsigned long long)arg1 ;
-(unsigned long long)faceInformationPrefetchMode;
@end

