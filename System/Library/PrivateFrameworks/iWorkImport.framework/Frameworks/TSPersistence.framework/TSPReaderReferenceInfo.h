/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSPReaderReferenceInfo : NSObject {

	long long _objectIdentifier;
	long long _componentIdentifier;

}

@property (nonatomic,readonly) long long objectIdentifier;                 //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) long long componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
+(id)newReferenceInfoWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(id)init;
-(long long)objectIdentifier;
-(long long)componentIdentifier;
-(id)initWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
@end
