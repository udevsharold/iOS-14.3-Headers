/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKSTouchDeliveryUpdate : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isDetached;
	unsigned _touchIdentifier;
	unsigned _contextID;
	int _pid;
	long long _type;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned touchIdentifier;              //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isDetached;                       //@synthesize isDetached=_isDetached - In the implementation block
@property (assign,nonatomic) unsigned contextID;                    //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) int pid;                               //@synthesize pid=_pid - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isDetached;
-(void)setTouchIdentifier:(unsigned)arg1 ;
-(unsigned)touchIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)pid;
-(void)setType:(long long)arg1 ;
-(void)setPid:(int)arg1 ;
-(unsigned)contextID;
-(void)setIsDetached:(BOOL)arg1 ;
-(void)setContextID:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
@end

