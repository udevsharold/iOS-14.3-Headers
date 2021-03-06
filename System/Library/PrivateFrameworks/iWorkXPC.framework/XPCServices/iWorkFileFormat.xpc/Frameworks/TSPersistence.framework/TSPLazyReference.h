/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSPLazyReferenceDelegate;
@class TSPObject, TSPComponent;

@interface TSPLazyReference : NSObject <NSCopying> {

	TSPObject* _strongObject;
	TSPObject* _weakObject;
	BOOL _isWeak;
	BOOL _allowUnknownObject;
	id<TSPLazyReferenceDelegate> _delegate;
	long long _identifier;
	TSPComponent* _component;

}

@property (assign,nonatomic,__weak) id<TSPLazyReferenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) TSPComponent * component;                           //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) TSPObject * weakObject; 
@property (nonatomic,retain) TSPObject * strongObject; 
@property (assign,nonatomic) BOOL isWeak;                                               //@synthesize isWeak=_isWeak - In the implementation block
@property (nonatomic,readonly) id object; 
@property (nonatomic,readonly) id objectIfLoaded; 
+(id)referenceForObject:(id)arg1 ;
-(TSPObject *)weakObject;
-(TSPObject *)strongObject;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(unsigned long long)hash;
-(long long)identifier;
-(void)setComponent:(TSPComponent *)arg1 ;
-(BOOL)isWeak;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDelegate:(id<TSPLazyReferenceDelegate>)arg1 ;
-(TSPComponent *)component;
-(id)debugDescription;
-(id<TSPLazyReferenceDelegate>)delegate;
-(void)resetIdentifier;
-(void)setStrongObject:(TSPObject *)arg1 ;
-(id)objectIfLoaded;
-(id)initWithTSPObject:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 ;
-(BOOL)isEqualToLazyReference:(id)arg1 ;
-(BOOL)referencesObject:(id)arg1 ;
-(void)setIsWeak:(BOOL)arg1 ;
-(BOOL)discardStrongObjectIfPossible;
@end

