/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVRMSAudioRoute : NSObject {

	BOOL _supportsVideo;
	BOOL _selected;
	NSString* _displayName;
	unsigned long long _macAddress;

}

@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL supportsVideo;                           //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
+(id)protobufsFromAudioRoutes:(id)arg1 ;
+(id)audioRoutesFromProtobufs:(id)arg1 ;
-(unsigned long long)macAddress;
-(BOOL)isSelected;
-(id)initWithProtobuf:(id)arg1 ;
-(id)protobuf;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setMacAddress:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)displayName;
-(BOOL)supportsVideo;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(BOOL)isEqualToAudioRoute:(id)arg1 ;
@end

