/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKRandomSource.h>

@class NSData;

@interface GKARC4RandomSource : GKRandomSource {

	Arc4State* _state;
	NSData* _seed;

}

@property (nonatomic,copy) NSData * seed; 
+(BOOL)supportsSecureCoding;
-(NSData *)seed;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(long long)nextInt;
-(unsigned long long)nextBits:(int)arg1 ;
-(float)nextUniform;
-(void)dropValuesWithCount:(unsigned long long)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(BOOL)nextBool;
-(void)setSeed:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
