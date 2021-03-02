/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray, CADisplayMode, NSString, CADisplayAttributes, CADisplayPreferences;

@interface CADisplay : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * availableModes; 
@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,readonly) CADisplayMode * preferredMode; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) BOOL allowsVirtualModes; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect safeBounds; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) unsigned displayId; 
@property (nonatomic,readonly) long long displayType; 
@property (nonatomic,readonly) unsigned seed; 
@property (nonatomic,readonly) unsigned connectionSeed; 
@property (nonatomic,readonly) NSString * uniqueId; 
@property (nonatomic,readonly) NSString * containerId; 
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (nonatomic,readonly) long long tag; 
@property (nonatomic,readonly) int processId; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@property (nonatomic,readonly) double refreshRate; 
@property (nonatomic,readonly) double heartbeatRate; 
@property (nonatomic,readonly) long long minimumFrameDuration; 
@property (getter=isOverscanned,nonatomic,readonly) BOOL overscanned; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (nonatomic,readonly) double overscanAmount; 
@property (nonatomic,readonly) CGSize overscanAmounts; 
@property (getter=isCloned,nonatomic,readonly) BOOL cloned; 
@property (getter=isCloning,nonatomic,readonly) BOOL cloning; 
@property (getter=isCloningSupported,nonatomic,readonly) BOOL cloningSupported; 
@property (nonatomic,readonly) NSString * nativeOrientation; 
@property (nonatomic,readonly) NSString * currentOrientation; 
@property (nonatomic,readonly) unsigned odLUTVersion; 
@property (nonatomic,readonly) BOOL supportsExtendedColors; 
@property (nonatomic,readonly) CADisplayAttributes * externalDisplayAttributes; 
@property (nonatomic,readonly) int linkQuality; 
@property (assign,nonatomic) double latency; 
@property (nonatomic,copy) CADisplayPreferences * preferences; 
@property (nonatomic,readonly) NSString * productName; 
+(id)displays;
+(id)TVOutDisplay;
+(void)updateDisplays;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)mainDisplay;
-(void)setPreferences:(CADisplayPreferences *)arg1 ;
-(void)setLatency:(double)arg1 ;
-(unsigned)seed;
-(NSString *)containerId;
-(int)linkQuality;
-(CADisplayMode *)currentMode;
-(BOOL)isSupported;
-(unsigned)displayId;
-(BOOL)isOverscanned;
-(NSString *)colorMode;
-(CADisplayPreferences *)preferences;
-(id)immutableCopy;
-(NSString *)productName;
-(NSString *)deviceName;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(int)processId;
-(double)latency;
-(BOOL)isExternal;
-(CGRect)frame;
-(unsigned)odLUTVersion;
-(double)heartbeatRate;
-(id)supportedHDRModes;
-(long long)minimumFrameDuration;
-(id)preferredHDRModes;
-(void)dealloc;
-(CGRect)bounds;
-(NSString *)currentOrientation;
-(CADisplayMode *)preferredMode;
-(NSString *)nativeOrientation;
-(long long)tag;
-(void)_invalidate;
-(BOOL)setDisplayProperties:(id)arg1 ;
-(long long)displayType;
-(CADisplayAttributes *)externalDisplayAttributes;
-(CGRect)safeBounds;
-(NSArray *)availableModes;
-(id)description;
-(id)preferredModeWithCriteria:(id)arg1 ;
-(void)update;
-(CGSize)overscanAmounts;
-(BOOL)allowsVirtualModes;
-(unsigned)connectionSeed;
-(id)allowedHDRModes;
-(void)overrideDisplayTimings:(id)arg1 ;
-(BOOL)isCloned;
-(double)overscanAmount;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(BOOL)isCloning;
-(NSString *)overscanAdjustment;
-(id)_initWithDisplay:(Display*)arg1 ;
-(NSString *)name;
-(double)refreshRate;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(id)flipBookWithCapacity:(unsigned long long)arg1 ;
-(BOOL)supportsExtendedColors;
-(void)setColorMode:(NSString *)arg1 ;
-(NSString *)uniqueId;
-(BOOL)isCloningSupported;
@end
