/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNFetchRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray, NSString;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding> {

	BOOL _shouldUnifyResults;
	BOOL _mutableObjects;
	BOOL _includeGroupChanges;
	BOOL _enforceClientIdentifier;
	BOOL _includeChangeAnchors;
	BOOL _includeChangeIDs;
	BOOL _includeExternalIDs;
	BOOL _includeImagesChanged;
	BOOL _includeLabeledValueChanges;
	NSData* _startingToken;
	NSArray* _additionalContactKeyDescriptors;
	NSArray* _excludedTransactionAuthors;
	NSString* _clientIdentifier;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeChangeAnchors;                            //@synthesize includeChangeAnchors=_includeChangeAnchors - In the implementation block
@property (assign,nonatomic) BOOL includeChangeIDs;                                //@synthesize includeChangeIDs=_includeChangeIDs - In the implementation block
@property (assign,nonatomic) BOOL includeExternalIDs;                              //@synthesize includeExternalIDs=_includeExternalIDs - In the implementation block
@property (assign,nonatomic) BOOL includeImagesChanged;                            //@synthesize includeImagesChanged=_includeImagesChanged - In the implementation block
@property (assign,nonatomic) BOOL includeLabeledValueChanges;                      //@synthesize includeLabeledValueChanges=_includeLabeledValueChanges - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL unifyResults; 
@property (nonatomic,copy) NSData * startingToken;                                 //@synthesize startingToken=_startingToken - In the implementation block
@property (nonatomic,copy) NSArray * additionalContactKeyDescriptors;              //@synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors - In the implementation block
@property (assign,nonatomic) BOOL shouldUnifyResults;                              //@synthesize shouldUnifyResults=_shouldUnifyResults - In the implementation block
@property (assign,nonatomic) BOOL mutableObjects;                                  //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (assign,nonatomic) BOOL includeGroupChanges;                             //@synthesize includeGroupChanges=_includeGroupChanges - In the implementation block
@property (nonatomic,copy) NSArray * excludedTransactionAuthors;                   //@synthesize excludedTransactionAuthors=_excludedTransactionAuthors - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)containerIdentifier;
-(BOOL)shouldUnifyResults;
-(void)acceptVisitor:(id)arg1 ;
-(void)setStartingToken:(NSData *)arg1 ;
-(void)setIncludeChangeIDs:(BOOL)arg1 ;
-(NSData *)startingToken;
-(NSArray *)additionalContactKeyDescriptors;
-(void)setIncludeExternalIDs:(BOOL)arg1 ;
-(void)setAdditionalContactKeyDescriptors:(NSArray *)arg1 ;
-(void)setIncludeLabeledValueChanges:(BOOL)arg1 ;
-(void)setStartingAnchor:(id)arg1 ;
-(BOOL)unifyResults;
-(id)initWithCoder:(id)arg1 ;
-(void)setExcludedTransactionAuthors:(NSArray *)arg1 ;
-(void)setIncludeImagesChanged:(BOOL)arg1 ;
-(BOOL)includeLabeledValueChanges;
-(id)description;
-(void)setMutableObjects:(BOOL)arg1 ;
-(void)setUnifyResults:(BOOL)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(BOOL)mutableObjects;
-(void)setIncludeChangeAnchors:(BOOL)arg1 ;
-(BOOL)includeExternalIDs;
-(void)setShouldUnifyResults:(BOOL)arg1 ;
-(void)setIncludeGroupChanges:(BOOL)arg1 ;
-(BOOL)includeChangeAnchors;
-(BOOL)includeGroupChanges;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(NSArray *)excludedTransactionAuthors;
-(BOOL)includeChangeIDs;
-(BOOL)includeImagesChanged;
-(void)encodeWithCoder:(id)arg1 ;
@end
