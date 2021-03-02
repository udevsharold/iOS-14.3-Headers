/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber;

@interface PAEKeyerLumaSetup : NSObject <NSCoding> {

	NSNumber* _lumA;
	NSNumber* _lumB;
	NSNumber* _lumC;
	NSNumber* _lumD;

}
-(id)init;
-(BOOL)isEqualTo:(id)arg1 ;
-(float)lumA;
-(float)lumB;
-(float)lumC;
-(float)lumD;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(void)setLumA:(float)arg1 ;
-(void)setLumB:(float)arg1 ;
-(void)setLumC:(float)arg1 ;
-(void)setLumD:(float)arg1 ;
-(void)setLumANumber:(id)arg1 ;
-(void)setLumBNumber:(id)arg1 ;
-(void)setLumCNumber:(id)arg1 ;
-(void)setLumDNumber:(id)arg1 ;
@end
