/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSimpleGraphObject.h>

@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphRelationship : HDSimpleGraphObject {

	BOOL _isReverseRelationship;
	NSString* _name;
	long long _nameID;
	long long _subjectID;
	long long _objectID;
	HDSimpleGraphNode* _subject;
	HDSimpleGraphNode* _object;

}

@property (assign,nonatomic,__weak) HDSimpleGraphNode * subject;              //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic,__weak) HDSimpleGraphNode * object;               //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long nameID;                              //@synthesize nameID=_nameID - In the implementation block
@property (nonatomic,readonly) BOOL isReverseRelationship;                    //@synthesize isReverseRelationship=_isReverseRelationship - In the implementation block
@property (nonatomic,readonly) long long subjectID;                           //@synthesize subjectID=_subjectID - In the implementation block
@property (nonatomic,readonly) long long objectID;                            //@synthesize objectID=_objectID - In the implementation block
-(HDSimpleGraphNode *)subject;
-(long long)objectID;
-(void)setSubject:(HDSimpleGraphNode *)arg1 ;
-(id)init;
-(long long)nameID;
-(HDSimpleGraphNode *)object;
-(unsigned long long)hash;
-(void)setObject:(HDSimpleGraphNode *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)subjectID;
-(NSString *)name;
-(id)debugDescription;
-(BOOL)isReverseRelationship;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 nameID:(long long)arg4 isReverse:(BOOL)arg5 subjectID:(long long)arg6 subject:(id)arg7 objectID:(long long)arg8 object:(id)arg9 ;
-(id)work_subjectWithError:(id*)arg1 ;
-(id)work_databaseObjectWithError:(id*)arg1 ;
@end
