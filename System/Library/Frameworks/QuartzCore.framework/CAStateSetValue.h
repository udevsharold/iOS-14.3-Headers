/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateSetValue : CAStateElement {

	NSString* _keyPath;
	id _value;

}

@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id value; 
+(BOOL)supportsSecureCoding;
-(NSString *)keyPath;
-(BOOL)matches:(id)arg1 ;
-(id)value;
-(void)apply:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end

