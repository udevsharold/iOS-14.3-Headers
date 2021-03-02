/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface KNSoundtrack : TSPObject <NSCopying> {

	float _volume;
	long long _mode;
	NSArray* _media;

}

@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) long long mode; 
@property (nonatomic,copy) NSArray * media; 
+(BOOL)needsObjectUUID;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setMode:(long long)arg1 ;
-(NSArray *)media;
-(long long)mode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMedia:(NSArray *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithSoundtrackMedia:(id)arg1 context:(id)arg2 ;
@end
