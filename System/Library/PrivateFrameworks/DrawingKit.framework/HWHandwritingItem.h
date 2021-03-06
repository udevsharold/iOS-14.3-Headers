/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, DKDrawing;

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSDate* _creationDate;
	DKDrawing* _drawing;

}

@property (retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) DKDrawing * drawing;                //@synthesize drawing=_drawing - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DKDrawing *)drawing;
-(NSUUID *)uuid;
-(void)setDrawing:(DKDrawing *)arg1 ;
-(id)initWithDrawing:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

