/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPFavoritesReplicaMergeOptions.h>

@protocol MSPFavoritesReplicaMergeOptions <MSPReplicaMergeOptions>
@property (getter=isDeserializationAllowed,readonly) BOOL deserializationAllowed; 
@required
-(BOOL)isDeserializationAllowed;
-(id)initWithDeserializationAllowed:(BOOL)arg1;

@end


@class NSString;

@interface MSPFavoritesReplicaMergeOptions : NSObject <MSPFavoritesReplicaMergeOptions> {

	BOOL _deserializationAllowed;

}

@property (getter=isDeserializationAllowed,readonly) BOOL deserializationAllowed;              //@synthesize deserializationAllowed=_deserializationAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDeserializationAllowed;
-(id)initWithDeserializationAllowed:(BOOL)arg1 ;
@end
