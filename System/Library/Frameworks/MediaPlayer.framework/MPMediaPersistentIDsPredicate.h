/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class NSString;

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	long long* _persistentIDs;
	BOOL _shouldContain;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;                    //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) const long long* persistentIDs;              //@synthesize persistentIDs=_persistentIDs - In the implementation block
@property (nonatomic,readonly) BOOL shouldContain;                          //@synthesize shouldContain=_shouldContain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(BOOL)arg3 ;
-(void)dealloc;
-(const long long*)persistentIDs;
-(BOOL)shouldContain;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)ML3PredicateForTrack;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(unsigned long long)count;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)ML3PredicateForContainer;
@end

