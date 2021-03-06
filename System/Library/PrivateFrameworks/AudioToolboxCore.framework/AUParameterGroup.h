/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSMutableDictionary;

@interface AUParameterGroup : AUParameterNode <NSSecureCoding> {

	NSArray* _children;
	NSMutableDictionary* _childIndicesByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * childIndicesByIdentifier;              //@synthesize childIndicesByIdentifier=_childIndicesByIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * children;                                        //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSArray * allParameters; 
+(BOOL)supportsSecureCoding;
-(BOOL)isGroup;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)children;
-(void)_serialize:(CASerializer*)arg1 ;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(void)_deserialize:(CADeserializer*)arg1 fromSetFullState:(BOOL)arg2 ;
-(id)initWithChildren:(id)arg1 ;
-(void)_indexChildren;
-(id)initWithID:(id)arg1 name:(id)arg2 children:(id)arg3 ;
-(NSArray *)allParameters;
-(id)initWithTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4 ;
-(NSMutableDictionary *)childIndicesByIdentifier;
-(void)setChildIndicesByIdentifier:(NSMutableDictionary *)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

