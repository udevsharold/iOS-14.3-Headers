/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBRebootContext : NSObject <NSCopying> {

	NSString* _reason;
	BOOL _isDark;
	BOOL _fromOTASoftwareUpdate;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (assign,getter=isDark,nonatomic) BOOL dark;               //@synthesize isDark=_isDark - In the implementation block
-(BOOL)isDark;
-(id)initWithReason:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDark:(BOOL)arg1 ;
-(id)description;
-(NSString *)reason;
-(BOOL)isEqual:(id)arg1 ;
@end

