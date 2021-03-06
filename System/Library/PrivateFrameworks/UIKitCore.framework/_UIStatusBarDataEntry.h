/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIStatusBarDataEntry : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enabled;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)disabledEntry;
+(id)entry;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(id)_ui_descriptionBuilder;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initFromData:(const SCD_Struct_UI120*)arg1 type:(int)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

