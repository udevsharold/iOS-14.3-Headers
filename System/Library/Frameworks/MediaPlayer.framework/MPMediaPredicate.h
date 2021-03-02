/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPPProtobufferCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPMediaPredicate : NSObject <MPPProtobufferCoding, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)protobufferEncodableObject;
-(BOOL)evaluateEntity:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
