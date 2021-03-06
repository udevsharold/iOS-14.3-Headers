/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PCWeakPointerValue : NSObject <NSCopying> {

	id _pointerValue;
	id _zeroingWeakValue;
	BOOL _hasZeroingWeakReference;

}

@property (nonatomic,readonly) id nonretainedObjectValue; 
@property (nonatomic,readonly) void* pointerValue;                     //@synthesize pointerValue=_pointerValue - In the implementation block
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)valueWithPointer:(void*)arg1 ;
+(id)weakPointerValueArrayFromArray:(id)arg1 ;
+(id)arrayFromWeakPointerValueArray:(id)arg1 ;
+(id)weakPointerValueSetFromSet:(id)arg1 ;
+(id)setFromWeakPointerValueSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void*)pointerValue;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)nonretainedObjectValue;
-(id)initWithNonretainedObject:(id)arg1 ;
-(id)initWithPointer:(void*)arg1 ;
@end

