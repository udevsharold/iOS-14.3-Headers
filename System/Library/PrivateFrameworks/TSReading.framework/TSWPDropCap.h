/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSSPropertyMap, NSArray;

@interface TSWPDropCap : NSObject <NSCopying> {

	unsigned long long _charCount;
	TSSPropertyMap* _characterStyleOverridePropertyMap;
	NSArray* _spacings;

}

@property (nonatomic,readonly) unsigned long long charCount;                                           //@synthesize charCount=_charCount - In the implementation block
@property (nonatomic,retain,readonly) TSSPropertyMap * characterStyleOverridePropertyMap;              //@synthesize characterStyleOverridePropertyMap=_characterStyleOverridePropertyMap - In the implementation block
@property (nonatomic,retain,readonly) NSArray * spacings;                                              //@synthesize spacings=_spacings - In the implementation block
+(id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacing:(id)arg3 ;
+(id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 lineCount:(unsigned long long)arg3 ;
+(id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacings:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)spacings;
-(unsigned long long)charCount;
-(TSSPropertyMap *)characterStyleOverridePropertyMap;
-(id)initWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacings:(id)arg3 ;
-(unsigned long long)computedFlagsForSpacing:(id)arg1 ;
@end
