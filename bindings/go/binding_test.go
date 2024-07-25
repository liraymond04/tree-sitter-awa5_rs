package tree_sitter_awa5_rs_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-awa5_rs"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_awa5_rs.Language())
	if language == nil {
		t.Errorf("Error loading Awa5Rs grammar")
	}
}
