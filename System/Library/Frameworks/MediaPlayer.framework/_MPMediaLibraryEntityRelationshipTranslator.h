/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject {

	BOOL _transient;
	Class _relationshipModelClass;
	ModelPropertyBase* _foreignPropertyBase;
	/*^block*/id _validRelationshipHandler;
	shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > >* _relationshipValidationProperties;

}

@property (assign,nonatomic) Class relationshipModelClass;                                                                        //@synthesize relationshipModelClass=_relationshipModelClass - In the implementation block
@property (assign,nonatomic) BOOL transient;                                                                                      //@synthesize transient=_transient - In the implementation block
@property (assign,nonatomic) ModelPropertyBase* foreignPropertyBase;                                                              //@synthesize foreignPropertyBase=_foreignPropertyBase - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::map<std::__1::basic_string<char> relationshipValidationProperties;              //@synthesize relationshipValidationProperties=_relationshipValidationProperties - In the implementation block
@property (nonatomic,copy) id validRelationshipHandler;                                                                           //@synthesize validRelationshipHandler=_validRelationshipHandler - In the implementation block
@property (nonatomic,readonly) MPMediaLibraryEntityTranslator * entityTranslator; 
-(Class)relationshipModelClass;
-(void)setTransient:(BOOL)arg1 ;
-(id)validRelationshipHandler;
-(MPMediaLibraryEntityTranslator *)entityTranslator;
-(ModelPropertyBase*)foreignPropertyBase;
-(void)setRelationshipModelClass:(Class)arg1 ;
-(void)setForeignPropertyBase:(ModelPropertyBase*)arg1 ;
-(BOOL)transient;
-(shared_ptr<std::__1::map<std::__1::basic_string<char>)relationshipValidationProperties;
-(void)setValidRelationshipHandler:(id)arg1 ;
-(void)setRelationshipValidationProperties:(shared_ptr<std::__1::map<std::__1::basic_string<char>)arg1 ;
@end
