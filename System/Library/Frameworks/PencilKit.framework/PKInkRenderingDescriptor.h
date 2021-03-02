/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject {

	NSString* _identifier;
	unsigned long long _version;
	unsigned long long _type;
	unsigned long long _blendMode;
	PKInkParticleDescriptor* _particleDescriptor;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long blendMode;                              //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) PKInkParticleDescriptor * particleDescriptor;              //@synthesize particleDescriptor=_particleDescriptor - In the implementation block
-(void)setBlendMode:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(unsigned long long)type;
-(unsigned long long)blendMode;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(PKInkParticleDescriptor *)particleDescriptor;
-(void)setParticleDescriptor:(PKInkParticleDescriptor *)arg1 ;
@end
