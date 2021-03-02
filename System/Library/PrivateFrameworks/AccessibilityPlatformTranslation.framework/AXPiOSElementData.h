/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXPiOSElementData : NSObject <NSCopying> {

	int _pid;
	SCD_Struct_AX1 _uid;

}

@property (assign,nonatomic) SCD_Struct_AX1 uid;              //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) int pid;                         //@synthesize pid=_pid - In the implementation block
-(void)setUid:(SCD_Struct_AX1)arg1 ;
-(SCD_Struct_AX1)uid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end
