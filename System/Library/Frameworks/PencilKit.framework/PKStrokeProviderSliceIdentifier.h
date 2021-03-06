/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHStrokeIdentifier.h>

@class NSUUID, NSString;

@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier> {

	double _tStart;
	double _tEnd;
	NSUUID* _strokeUUID;
	PKStrokeID _version;

}

@property (nonatomic,readonly) double tStart;                       //@synthesize tStart=_tStart - In the implementation block
@property (nonatomic,readonly) double tEnd;                         //@synthesize tEnd=_tEnd - In the implementation block
@property (nonatomic,readonly) NSUUID * strokeUUID;                 //@synthesize strokeUUID=_strokeUUID - In the implementation block
@property (nonatomic,readonly) PKStrokeID version;                  //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)tEnd;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)tStart;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(PKStrokeID)version;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)strokeUUID;
-(id)initWithUUID:(id)arg1 version:(PKStrokeID)arg2 tStart:(double)arg3 tEnd:(double)arg4 ;
@end

