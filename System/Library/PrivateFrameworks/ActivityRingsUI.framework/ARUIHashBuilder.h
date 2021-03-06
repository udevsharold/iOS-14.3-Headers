/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUIHashBuilder : NSObject {

	unsigned long long _hash;

}
+(id)builder;
-(void)appendObject:(id)arg1 ;
-(id)init;
-(void)appendFloat:(float)arg1 ;
-(unsigned long long)hash;
-(void)appendCGFloat:(double)arg1 ;
-(void)appendDouble:(double)arg1 ;
-(void)appendCGRect:(CGRect)arg1 ;
-(void)appendBool:(BOOL)arg1 ;
-(void)appendUnsignedInt:(unsigned long long)arg1 ;
-(void)appendFloat2:;
-(unsigned long long)hashForFloat:(float)arg1 ;
-(unsigned long long)hashForCGFloat:(double)arg1 ;
-(unsigned long long)hashForNSTimeInterval:(double)arg1 ;
-(unsigned long long)hashForDouble:(double)arg1 ;
-(void)appendFloat4:;
-(void)appendInt:(long long)arg1 ;
-(void)appendTimeInterval:(double)arg1 ;
-(void)appendFloat4x4:(SCD_Struct_AR2)arg1 ;
@end

