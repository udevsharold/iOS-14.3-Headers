/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARAnchor.h>
#import <ARKitCore/ARTrackable.h>

@class NSURL, NSNumber, NSString;

@interface ARAppClipCodeAnchor : ARAnchor <ARTrackable> {

	BOOL _isScaleReliable;
	BOOL _isTracked;
	float _radius;
	float _confidence;
	NSURL* _url;
	NSNumber* _instanceID;
	long long _urlDecodingStateInternal;
	unsigned long long _urlEncodingVersion;

}

@property (nonatomic,copy) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSNumber * instanceID;                              //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic) float confidence;                                   //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) float radius;                                       //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) long long urlDecodingStateInternal;                 //@synthesize urlDecodingStateInternal=_urlDecodingStateInternal - In the implementation block
@property (assign,nonatomic) BOOL isScaleReliable;                               //@synthesize isScaleReliable=_isScaleReliable - In the implementation block
@property (assign,nonatomic) unsigned long long urlEncodingVersion;              //@synthesize urlEncodingVersion=_urlEncodingVersion - In the implementation block
@property (assign,nonatomic) BOOL isTracked;                                     //@synthesize isTracked=_isTracked - In the implementation block
@property (nonatomic,readonly) long long urlDecodingState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(float)radius;
-(float)confidence;
-(void)setRadius:(float)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(NSNumber *)instanceID;
-(id)initWithCoder:(id)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(NSString *)description;
-(BOOL)isTracked;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)urlDecodingStateInternal;
-(BOOL)isScaleReliable;
-(unsigned long long)urlEncodingVersion;
-(void)setUrlDecodingStateInternal:(long long)arg1 ;
-(void)setIsScaleReliable:(BOOL)arg1 ;
-(void)setUrlEncodingVersion:(unsigned long long)arg1 ;
-(void)setIsTracked:(BOOL)arg1 ;
-(id)initWithAppClipCodeResult:(id)arg1 instanceID:(id)arg2 ;
-(long long)urlDecodingState;
-(id)copyWithAppClipCodeResult:(id)arg1 isTracked:(BOOL)arg2 ;
-(id)copyWithIsTracked:(BOOL)arg1 ;
@end

